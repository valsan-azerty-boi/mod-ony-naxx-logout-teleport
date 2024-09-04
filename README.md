# mod-ony-naxx-logout-teleport
[![Build Status](https://github.com/valsan-azerty-boi/mod-ony-naxx-logout-teleport/workflows/core-build/badge.svg?branch=master&event=push)](https://github.com/valsan-azerty-boi/mod-ony-naxx-logout-teleport)

This module is designed to work with [AzerothCore](https://www.azerothcore.org/) (3.3.5).

## Why use this module
Some modules such as [mod-individual-progression](https://github.com/ZhengPeiRu21/mod-individual-progression) or [mod-vanilla-naxxramas](https://github.com/sogladev/mod-vanilla-naxxramas) reintroduce previously removed vanilla wow raids into the game like Onyxia 60 and Naxxramas 60.

However, despite updates and fixes introduced in these modules, it still sometimes happens that if the player disconnects his character in these reintroduced instances then the game client will constantly crash when the character reconnects.

My module allows you to remedy this problem in a simple and very crude way.

## How it works
if the player disconnects in these instances and try to reconnect, he will be teleported outside to avoid the crash loop. In lot of case, player may have to attempt logging in twice.

## How to install
Clone or download this module in your "/azeroth-wotlk/modules" folder. And now compile your core and modules.
