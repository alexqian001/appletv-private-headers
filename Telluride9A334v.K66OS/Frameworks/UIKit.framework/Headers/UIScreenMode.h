/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library


@interface UIScreenMode : NSObject {
@private
	id _mode;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) float pixelAspectRatio;	// G=0x3005ace9; 
@property(readonly, assign, nonatomic) CGSize size;	// G=0x3034773d; 
+ (id)screenModeForDisplayMode:(id)displayMode;	// 0x3005a81d
- (id)initWithDisplayMode:(id)displayMode;	// 0x3005a8dd
- (id)_displayMode;	// 0x303477a5
- (BOOL)_isNTSCOrPAL;	// 0x3005acbd
- (id)description;	// 0x303477b5
// declared property getter: - (float)pixelAspectRatio;	// 0x3005ace9
// declared property getter: - (CGSize)size;	// 0x3034773d
@end

