# WukongTweak
[![Patreon-Button](https://github.com/user-attachments/assets/d48a56e7-ab96-4257-8b7e-e2293695e6cb)](https://www.patreon.com/Wintermance) [![ko-fi](https://ko-fi.com/img/githubbutton_sm.svg)](https://ko-fi.com/W7W01UAI9)<br />
[![Github All Releases](https://img.shields.io/github/downloads/Lyall/WukongTweak/total.svg)](https://github.com/Lyall/WukongTweak/releases)

This is an ASI plugin for Black Myth: Wukong that features expanded ultrawide support and graphical tweaks.

## Features
### General
- Adjust gameplay FOV.
- Enable developer console.

### Ultrawide
- Remove 21:9 aspect ratio limit.
- Fix cropped FOV at <16:9.

### Graphical Tweaks
- Adjust forced sharpening.
- Disable chromatic aberration.
- Disable vignette (darkening at the edges of the screen).
- Enable virtual shadow maps.

## Installation
- If you used my [patch](https://github.com/Lyall/UltrawidePatches/tree/main/Black%20Myth%20Wukong) for the game before, make sure to delete `SUWSF.asi` and `SUWSF.ini` in the game folder.
- Grab the latest release of WukongTweak from [here.](https://github.com/Lyall/WukongTweak/releases)
- Extract the contents of the release zip in to the the game folder. e.g. ("**steamapps\common\BlackMythWukong**" for Steam).

### Steam Deck/Linux Additional Instructions
🚩**You do not need to do this if you are using Windows!**
- Open up the game properties in Steam and add `WINEDLLOVERRIDES="dsound=n,b" %command%` to the launch options.

## Console
To display the console, you will need to have a console key bound.<br/>
You can do this by editing `%LOCALAPPDATA%\b1\Saved\Config\Windows\Input.ini` and adding these lines:
```ini
[/Script/Engine.InputSettings]
ConsoleKeys=Tilde
```

## Configuration
- See **WukongTweak.ini** to adjust settings.

## Known Issues
Please report any issues you see.
This list will contain bugs which may or may not be fixed.

## Screenshots
| ![ezgif-4-d26e19afde](https://github.com/user-attachments/assets/20bed27f-f26b-4fea-8321-065da2a22c34) |
|:--:|
| Expanded Ultrawide Support |

## Credits
[Ultimate ASI Loader](https://github.com/ThirteenAG/Ultimate-ASI-Loader) for ASI loading. <br />
[inipp](https://github.com/mcmtroffaes/inipp) for ini reading. <br />
[spdlog](https://github.com/gabime/spdlog) for logging. <br />
[safetyhook](https://github.com/cursey/safetyhook) for hooking. <br />
[UnrealContainers](https://github.com/Fischsalat/UnrealContainers) for working with UE4/5 container types.
