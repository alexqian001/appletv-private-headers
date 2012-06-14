/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import <NSObject.h> // Unknown library

@class CADisplayMode, NSString, NSArray;

@interface CADisplay : NSObject {
@private
	void *_impl;	// 4 = 0x4
}
@property(assign) BOOL allowsVirtualModes;	// G=0x32b13e89; S=0x32b13eb9; 
@property(readonly, assign, nonatomic) NSArray *availableModes;	// G=0x32a4ff99; 
@property(readonly, assign, nonatomic) CGRect bounds;	// G=0x32a4fee1; 
@property(readonly, assign, getter=isCloned) BOOL cloned;	// G=0x32b14021; 
@property(readonly, assign, getter=isCloningSupported) BOOL cloningSupported;	// G=0x32b14051; 
@property(copy, nonatomic) NSString *colorMode;	// G=0x32b13da9; S=0x32b13e11; 
@property(retain, nonatomic) CADisplayMode *currentMode;	// G=0x32a4f93d; S=0x32b13cf1; 
@property(readonly, assign, nonatomic) NSString *deviceName;	// G=0x32b13c7d; 
@property(readonly, assign) unsigned displayId;	// G=0x32b13c91; 
@property(readonly, assign, getter=isExternal) BOOL external;	// G=0x32b13f95; 
@property(readonly, assign, nonatomic) NSString *name;	// G=0x32a4ed39; 
@property(copy, nonatomic) NSString *overscanAdjustment;	// G=0x32a4fbd9; S=0x32a4fc71; 
@property(readonly, assign) float overscanAmount;	// G=0x32b13ff5; 
@property(readonly, assign, getter=isOverscanned) BOOL overscanned;	// G=0x32a4fc3d; 
@property(readonly, assign, nonatomic) CADisplayMode *preferredMode;	// G=0x32b13d75; 
@property(readonly, assign) double refreshRate;	// G=0x32b13fc5; 
@property(readonly, assign, nonatomic) CGRect safeBounds;	// G=0x32b13ed9; 
@property(readonly, assign, getter=isSupported) BOOL supported;	// G=0x32a4fb75; 
@property(readonly, assign) int tag;	// G=0x32a4fba9; 
@property(readonly, assign) NSString *uniqueId;	// G=0x32b13ca5; 
+ (id)TVOutDisplay;	// 0x32b13c61
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x32a4ff91
+ (id)displays;	// 0x32a4bad5
+ (id)mainDisplay;	// 0x32a726e1
- (id)_initWithDisplay:(Display *)display;	// 0x32a4ece5
- (void)_invalidate;	// 0x32a764bd
// declared property getter: - (BOOL)allowsVirtualModes;	// 0x32b13e89
// declared property getter: - (id)availableModes;	// 0x32a4ff99
// declared property getter: - (CGRect)bounds;	// 0x32a4fee1
// declared property getter: - (id)colorMode;	// 0x32b13da9
// declared property getter: - (id)currentMode;	// 0x32a4f93d
- (id)description;	// 0x32b14081
// declared property getter: - (id)deviceName;	// 0x32b13c7d
// declared property getter: - (unsigned)displayId;	// 0x32b13c91
// declared property getter: - (BOOL)isCloned;	// 0x32b14021
// declared property getter: - (BOOL)isCloningSupported;	// 0x32b14051
// declared property getter: - (BOOL)isExternal;	// 0x32b13f95
// declared property getter: - (BOOL)isOverscanned;	// 0x32a4fc3d
// declared property getter: - (BOOL)isSupported;	// 0x32a4fb75
// declared property getter: - (id)name;	// 0x32a4ed39
// declared property getter: - (id)overscanAdjustment;	// 0x32a4fbd9
// declared property getter: - (float)overscanAmount;	// 0x32b13ff5
// declared property getter: - (id)preferredMode;	// 0x32b13d75
// declared property getter: - (double)refreshRate;	// 0x32b13fc5
// declared property getter: - (CGRect)safeBounds;	// 0x32b13ed9
// declared property setter: - (void)setAllowsVirtualModes:(BOOL)modes;	// 0x32b13eb9
// declared property setter: - (void)setColorMode:(id)mode;	// 0x32b13e11
// declared property setter: - (void)setCurrentMode:(id)mode;	// 0x32b13cf1
// declared property setter: - (void)setOverscanAdjustment:(id)adjustment;	// 0x32a4fc71
// declared property getter: - (int)tag;	// 0x32a4fba9
// declared property getter: - (id)uniqueId;	// 0x32b13ca5
- (void)update;	// 0x32a4edcd
@end
