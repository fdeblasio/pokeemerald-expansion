import glob
import re
import os

if not os.path.exists("Makefile"):
    print("Please run this script from your root folder.")
    quit()

# Read file being replaced and extract the frame information
for file in glob.glob('./src/data/trainer_parties.h'):
    with open(file, 'r') as f:
        content = f.read()

# Extract data from file being replaced
find_pattern = re.compile(r'sParty_([A-Za-z0-9]*)\[\]\s*=\s*\{\n((    .*\n)*)\};')
find_data = {}
for match in find_pattern.findall(content):
    if len(match) == 3:
        trainer_name, trainer_party, trainer_party_single = match
        find_data[trainer_name] = (trainer_party)

writeFile = "./src/data/trainers.h"
indent = "    "

# Read file being migrated to content
for file in glob.glob(writeFile):
    with open(file, 'r') as f:
        writeContent = f.read()

# Modify file being migrated to content
def add_new_data(match):
    trainer_name = match.group(1)
    if trainer_name in find_data:
        trainer_party = indent + find_data[trainer_name].replace("\n", "\n" + indent)
        party_size = trainer_party.count("},") + 1
        print(f"Updating sParty_{trainer_name}")
        return f'.partySize = {party_size},\n    .party = (const struct TrainerMon[]) {{\n{trainer_party}}}'
    else:
        return match.group(0)

item_pattern = re.compile(r'\.party = TRAINER_PARTY\(sParty_([A-Za-z0-9]*)\)')
modified_content = item_pattern.sub(add_new_data, writeContent)

# Write the modified content back to file being migrated to
for file in glob.glob(writeFile):
    with open(file, 'w') as f:
        f.write(modified_content)
        print(writeFile + " has been updated")