/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSBundle;

@interface BRSystemLanguages : NSObject {
@private
	NSBundle *_promptBundle;	// 4 = 0x4
}
+ (id)currentLanguage;	// 0x331516b1
- (id)init;	// 0x33151471
- (id)_promptFileForLang:(id)lang;	// 0x33151729
- (void)dealloc;	// 0x33151525
- (id)getLangsAndPrompts:(BOOL)prompts;	// 0x33151571
@end
