/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import "CoreThemeDefinition-Structs.h"
#import </libobjc.A.h>

@class TDRenditionSpec, NSData;

@interface TDRenditionEntry : NSObject {
	renditionkeytoken *key;	// 4 = 0x4
	renditionkeytoken stackKey[16];	// 8 = 0x8
	const renditionkeyfmt *keyFormat;	// 72 = 0x48
	NSData *assetData;	// 76 = 0x4c
	TDRenditionSpec *renditionSpec;	// 80 = 0x50
}
@property(readonly, assign, nonatomic) NSData *assetData;	// G=0x3074f97d; @synthesize
@property(readonly, assign, nonatomic) TDRenditionSpec *renditionSpec;	// G=0x3074f98d; @synthesize
- (id)initWithKey:(const renditionkeytoken *)key keyFormat:(const renditionkeyfmt *)format assetData:(id)data renditionSpec:(id)spec;	// 0x3074f7e5
// declared property getter: - (id)assetData;	// 0x3074f97d
- (int)compare:(id)compare;	// 0x3074f955
- (void)dealloc;	// 0x3074f8cd
// declared property getter: - (id)renditionSpec;	// 0x3074f98d
@end
