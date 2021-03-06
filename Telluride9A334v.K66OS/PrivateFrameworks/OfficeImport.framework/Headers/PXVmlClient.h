/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OAVClient.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface PXVmlClient : NSObject <OAVClient> {
}
+ (id)colorWithRecolorInfoColorString:(id)recolorInfoColorString;	// 0x356fccc1
+ (void)readClientDataFromGroup:(xmlNode *)group toGroup:(id)group2 state:(id)state;	// 0x356fccbd
+ (void)readClientDataFromShape:(xmlNode *)shape toGraphic:(id)graphic state:(id)state;	// 0x356a7949
+ (int)vmlSupportLevel;	// 0x356a77ed
@end

