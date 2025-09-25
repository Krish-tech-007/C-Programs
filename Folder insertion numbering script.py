import os
import re
import shutil

# 🔧 Configuration
base_dir = r'D:\C-Programs'  # ← Replace with your actual path
new_folder_name = 'PointersAndMultiDimensionalArray'  # ← Unnumbered folder to insert
insert_position = 64  # ← Position where you want to insert it

# 📂 Get all folders in the directory
folders = [f for f in os.listdir(base_dir) if os.path.isdir(os.path.join(base_dir, f))]

# 🧠 Extract numbered folders
numbered = []
unnumbered = []

for folder in folders:
    match = re.match(r'^(\d+)\s*-\s*(.+)', folder)
    if match:
        num = int(match.group(1))
        name = match.group(2)
        numbered.append((num, name, folder))
    else:
        unnumbered.append(folder)

# 🧼 Sort numbered folders by number
numbered.sort()

# 🔍 Check if new folder exists
if new_folder_name not in unnumbered:
    print(f"❌ Folder '{new_folder_name}' not found in unnumbered list.")
    exit()

# 🧱 Step 1: Renumber folders from insert_position onward
for i in reversed(range(len(numbered))):
    num, name, old_folder = numbered[i]
    if num >= insert_position:
        new_num = num + 1
        new_name = f"{new_num:03d} - {name}"
        src = os.path.join(base_dir, old_folder)
        dst = os.path.join(base_dir, new_name)
        print(f"Renaming: '{old_folder}' → '{new_name}'")
        os.rename(src, dst)

# 🧱 Step 2: Insert the new folder
new_name = f"{insert_position:03d} - {new_folder_name}"
src = os.path.join(base_dir, new_folder_name)
dst = os.path.join(base_dir, new_name)
print(f"Inserting: '{new_folder_name}' → '{new_name}'")
os.rename(src, dst)

print("✅ Folder inserted and numbering updated.")