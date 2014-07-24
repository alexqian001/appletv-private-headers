/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVLeafItem.h"

@class NSURL;

@interface CoreDAVHrefItem : CoreDAVLeafItem {
	NSURL *_baseURL;	// 28 = 0x1c
	int _writeStyle;	// 32 = 0x20
}
@property(retain) NSURL *baseURL;	// G=0x3049c2f9; S=0x3049c30d; @synthesize=_baseURL
@property(assign) int writeStyle;	// G=0x3049c31d; S=0x3049c331; @synthesize=_writeStyle
- (id)init;	// 0x3049bd31
- (id)initWithURL:(id)url;	// 0x3049bd7d
// declared property getter: - (id)baseURL;	// 0x3049c2f9
- (void)dealloc;	// 0x3049bdc1
- (id)description;	// 0x3049be0d
- (void)parserSuggestsBaseURL:(id)url;	// 0x3049c2e9
- (id)payloadAsFullURL;	// 0x3049c071
- (id)payloadAsOriginalURL;	// 0x3049c2a1
// declared property setter: - (void)setBaseURL:(id)url;	// 0x3049c30d
// declared property setter: - (void)setWriteStyle:(int)style;	// 0x3049c331
- (void)write:(id)write;	// 0x3049bf0d
// declared property getter: - (int)writeStyle;	// 0x3049c31d
@end
