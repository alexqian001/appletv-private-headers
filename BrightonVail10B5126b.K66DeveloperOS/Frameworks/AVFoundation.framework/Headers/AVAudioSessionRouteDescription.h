/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@class NSArray;

@interface AVAudioSessionRouteDescription : NSObject {
	void *_impl;	// 4 = 0x4
}
@property(readonly, assign) NSArray *inputs;	// G=0x3023da69; 
@property(readonly, assign) NSArray *outputs;	// G=0x3023daa1; 
+ (id)privateCreateWithCFDictionaryRef:(CFDictionaryRef)cfdictionaryRef;	// 0x3023db4d
- (id)init;	// 0x3023d92d
- (void)dealloc;	// 0x3023d979
- (id)description;	// 0x3023dad9
// declared property getter: - (id)inputs;	// 0x3023da69
// declared property getter: - (id)outputs;	// 0x3023daa1
- (RouteDescriptionImpl *)privateGetImplementation;	// 0x3023db3d
@end
