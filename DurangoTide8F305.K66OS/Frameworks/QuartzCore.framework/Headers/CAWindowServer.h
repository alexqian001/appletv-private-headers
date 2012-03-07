/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray;

@interface CAWindowServer : NSObject {
@private
	CAWindowServerImpl *_impl;	// 4 = 0x4
}
@property(readonly, assign) NSArray *displays;	// G=0x334e71a5; 
@property(assign, getter=isMirroringEnabled) BOOL mirroringEnabled;	// G=0x3355de91; S=0x3355e079; 
@property(assign) unsigned rendererFlags;	// G=0x3355d94d; S=0x3355e9f5; 
+ (id)context;	// 0x3355dc71
+ (id)contextWithOptions:(id)options;	// 0x3355dc0d
+ (id)server;	// 0x3355e0d1
+ (id)serverIfRunning;	// 0x334e7199
- (id)init;	// 0x3355dbf5
- (void)_detectDisplays;	// 0x3355df3d
- (id)_init;	// 0x3355dd11
- (void)addDisplay:(id)display;	// 0x3355dd75
- (void)dealloc;	// 0x3355e02d
- (id)description;	// 0x3355db8d
- (id)displayWithName:(id)name;	// 0x3355ded1
// declared property getter: - (id)displays;	// 0x334e71a5
// declared property getter: - (BOOL)isMirroringEnabled;	// 0x3355de91
- (void)removeAllDisplays;	// 0x3355de39
- (void)removeDisplay:(id)display;	// 0x3355ddd5
// declared property getter: - (unsigned)rendererFlags;	// 0x3355d94d
// declared property setter: - (void)setMirroringEnabled:(BOOL)enabled;	// 0x3355e079
// declared property setter: - (void)setRendererFlags:(unsigned)flags;	// 0x3355e9f5
@end
