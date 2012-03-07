/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "GQDNameMappable.h"
#import "iWorkImport-Structs.h"

@class GQDFilteredImage, GQDColor;

__attribute__((visibility("hidden")))
@interface GQDTexturedImageFill : NSObject <GQDNameMappable> {
@private
	int mTechnique;	// 4 = 0x4
	GQDColor *mColor;	// 8 = 0x8
	GQDFilteredImage *mFilteredImage;	// 12 = 0xc
}
@property(retain) id color;	// G=0x32bdbf79; S=0x32bdbfd5; converted property
+ (const StateSpec *)stateForReading;	// 0x32bdbf5d
// converted property getter: - (id)color;	// 0x32bdbf79
- (void)dealloc;	// 0x32bdc01d
- (id)imageBinary;	// 0x32bdbf89
- (void)invalidateFilteredImage;	// 0x32bdbfa9
- (int)readAttributesFromReader:(xmlTextReader *)reader processor:(id)processor;	// 0x32bdc401
// converted property setter: - (void)setColor:(id)color;	// 0x32bdbfd5
- (int)technique;	// 0x32bdbf69
@end
