/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <NSObject.h> // Unknown library
#import "ScreenReaderCore-Structs.h"


@interface SCRCGestureFinger : NSObject {
	unsigned _identifier;	// 4 = 0x4
	CGPoint _location;	// 8 = 0x8
}
@property(readonly, assign) unsigned identifier;	// G=0x31ee56cd; converted property
@property(readonly, assign) CGPoint location;	// G=0x31ee5c4d; converted property
- (id)initWithIdentifier:(unsigned)identifier location:(CGPoint)location;	// 0x31ee4a59
- (id)description;	// 0x31eea319
// converted property getter: - (unsigned)identifier;	// 0x31ee56cd
// converted property getter: - (CGPoint)location;	// 0x31ee5c4d
@end

