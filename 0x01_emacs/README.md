[links]
(https://www.markdownguide.org/basic-syntax/) - *Markdown syntax*

# Emacs Basics and Commands

1. **What is Emacs?**
Emacs is a powerful, extensible, and customizable text editor. It is widely used for programming, text editing, and as an integrated development environment(IIDE). It was originally created by Richard Stallman.

___

2. **Who is Richard Stallman?**
Richard Stallman (RMS) is a programmer and activist who founded the Free Software Foundation (FSF). He created Emacs and launched the GNU Project, who led to the development of many free software tools, including the GNU operating system.

___

3. **How to Open and Save Files in Emacs**
- **Open a file:**
 Press 'C-x C-f' ('Ctrl + x' , then 'Ctrl + f') and enter the file name.
- **Save a file:**
 Press 'C-x C-s' to save the file.
- **Save As (Save to a new file):**
 Press 'C-x C-w', then type the new filename.

___

3. **What is a Buffer and How to Switch Between Buffers?**
- A **buffer** is an area where Emacs loads and edits a file. Each open file (process has its own buffer.
- **Switch between buffers:**
  - 'C-x b' - Type buffer name to switch
  - 'C-x C-b' - Show a list of open buffers
  - 'M->' or '<M-<' ('Alt + >' or 'Alt + >') - Move to the last of first buffer

___

4. **How to Use the Mark and Point to set the Region?**
- **Point:** The current cursor position in the buffer.
- **Mark:** A saved cursor position that allows you defikne a region ( aselected text area).
- **Setting a region:**
  - 'C-SPC' (Ctrl + Space) - set mark
  - MOve cursor to extend selection
  - The region is now selected ( highlighted in modern Emacs).

___

5. **How to Cut and Paste Lines and Regions?**
- **Cut (Kill):**
'C-k' - Cut (kill) the current line
'C-w' - Cut (Kill) the selected region

- **Copy (Yank from Kill Ring):**
'M-w' - Copy the selected region

- **Paste(Yank);**
'C-y' - Paste(yank the last cut/copied text
'M-y' - Cycle through previous yanked text

___

6. **How to search Forward and Backward?**
- **Forward search:**
  - 'C-s' - Start increment search forward
  - Type text to search
  - Press 'C-s' again to jump to the next occurrence

- **Backward search**
  - 'C-r' - Start search in reverse
  - Press 'C-r' again to find the previous occurrence

___

7. **How to invoke Commands by Name?**
- Use 'M-x' (Alt + x) to enter a command by name.
- Example
  - 'M-x replace-string' - Replace a word or phrase
  -  'M-x find-file' - Open a file

___

8. **How to Undo**
- 'C-/' or 'C-x u' - Undo the last change
- 'M-x undo' - Invoke undo manually

___

9. **How to Cancel Half-Entered Commands**
- 'C-g' - Cancels an incomplete command or operation.

___

10. **How to Quit Emacs**
- 'C-x C-c' - Exit Emacs (it will prompts you to save unsaved work).
