/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface OADColorScheme : NSObject {
	NSMutableDictionary *mColors;	// 4 = 0x4
}
- (id)init;	// 0x3396cd89
- (void)addColor:(id)color index:(int)index;	// 0x33975005
- (void)addDefaultColors;	// 0x33b9e4b9
- (unsigned)colorCount;	// 0x33a5d0ed
- (id)colorForIndex:(int)index;	// 0x339cc5bd
- (void)dealloc;	// 0x339dd861
- (BOOL)isEqual:(id)equal;	// 0x33b9e685
- (void)setColor:(id)color index:(int)index;	// 0x33b9e469
@end

