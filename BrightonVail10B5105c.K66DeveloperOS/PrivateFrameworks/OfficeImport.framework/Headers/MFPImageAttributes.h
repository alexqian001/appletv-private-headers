/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface MFPImageAttributes : NSObject {
	NSMutableDictionary *mColorAdjustMap;	// 4 = 0x4
}
- (id)init;	// 0x37ba4835
- (id)colorAdjustWithType:(int)type;	// 0x37ba48e5
- (void)dealloc;	// 0x37ba4899
- (id)ensureColorAdjustWithType:(int)type;	// 0x37ba4955
@end
