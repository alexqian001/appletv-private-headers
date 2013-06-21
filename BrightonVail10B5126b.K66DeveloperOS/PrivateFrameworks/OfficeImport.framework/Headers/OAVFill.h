/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


@interface OAVFill : NSObject {
}
+ (void)addStopsFromArray:(const OAVGradientStop *)array stopCount:(int)count inverted:(BOOL)inverted startPos:(float)pos endPos:(float)pos5 toGradientFill:(id)gradientFill manager:(id)manager;	// 0x349a9b49
+ (id)readBlipRefFromManager:(id)manager state:(id)state;	// 0x349b1265
+ (id)readFromManager:(id)manager state:(id)state;	// 0x348f24d9
+ (void)readGradientFill:(id)fill fromManager:(id)manager;	// 0x349a95d9
+ (void)readImageFill:(id)fill fromManager:(id)manager state:(id)state;	// 0x34a54371
+ (id)targetBgColorWithManager:(id)manager;	// 0x349b13d5
+ (id)targetFgColorWithManager:(id)manager;	// 0x348f2b61
@end
