/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FactoryTest.framework/FactoryTest
 */

#import <NSObject.h> // Unknown library


@interface ControlBits : NSObject {
}
+ (bool)_headerCheck;	// 0x33f0701d
+ (bool)conformsToiPXInterface;	// 0x33f07235
+ (Class)implementationClass;	// 0x33f07225
+ (void)initialize;	// 0x33f07055
+ (int)readControlBit:(unsigned char)bit into:(out id *)into;	// 0x33f07271
+ (int)readControlBits:(unsigned char)bits status:(int *)status failCount:(int *)count secure:(BOOL *)secure;	// 0x33f0739d
+ (int)readControlBitsBytes:(char *)bytes bufferLen:(unsigned short)len;	// 0x33f0721d
+ (int)writeControlBits:(unsigned char)bits status:(int)status;	// 0x33f073b9
+ (int)writeControlBits:(unsigned char)bits status:(int)status swVersion:(id)version;	// 0x33f0734d
@end
