/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBJsonStreamParserState : NSObject {
}
+ (id)sharedInstance;	// 0x333011d8
- (id)name;	// 0x333011fc
- (BOOL)needKey;	// 0x333011f4
- (BOOL)parser:(id)parser shouldAcceptToken:(int)token;	// 0x333011e0
- (void)parser:(id)parser shouldTransitionTo:(int)to;	// 0x333011f0
- (int)parserShouldReturn:(id)parser;	// 0x333011e8
@end

