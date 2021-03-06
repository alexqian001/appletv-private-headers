/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import "AssistantServices-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface AFSpeakableUtteranceParser : NSObject {
	NSMutableDictionary *_providers;	// 4 = 0x4
	id _functionHandler;	// 8 = 0x8
}
@property(assign, nonatomic) BOOL handleTTSCodes;	// G=0x33fa808d; S=0x33fa80d1; 
@property(assign, nonatomic) BOOL handlesFunctions;	// G=0x33fa81b9; S=0x33fa81fd; 
+ (BOOL)_shouldAutomaticallyProvideFunctions;	// 0x33fa7d65
+ (id)parseUserGeneratedMessage:(id)message;	// 0x33fa7d69
- (id)init;	// 0x33fa7f4d
- (void).cxx_destruct;	// 0x33fa9065
- (id)_handleControlCodeAtIndex:(unsigned)index withBuffer:(XXStruct_1STaIB)buffer totalLength:(unsigned)length consumedLength:(unsigned *)length4 hadEmpties:(BOOL *)empties;	// 0x33fa8945
- (id)_handleOptionalAtIndex:(unsigned)index withBuffer:(XXStruct_1STaIB)buffer totalLength:(unsigned)length consumedLength:(unsigned *)length4;	// 0x33fa8705
- (id)_handleProviderAtIndex:(unsigned)index withBuffer:(XXStruct_1STaIB)buffer totalLength:(unsigned)length consumedLength:(unsigned *)length4;	// 0x33fa83d9
// declared property getter: - (BOOL)handleTTSCodes;	// 0x33fa808d
// declared property getter: - (BOOL)handlesFunctions;	// 0x33fa81b9
- (id)parseStringWithFormat:(id)format error:(id *)error;	// 0x33fa9041
- (id)parseStringWithFormat:(id)format error:(id *)error hadEmpties:(BOOL *)empties;	// 0x33fa8dad
- (void)registerProvider:(id)provider forNamespace:(id)aNamespace;	// 0x33fa8001
// declared property setter: - (void)setHandleTTSCodes:(BOOL)codes;	// 0x33fa80d1
// declared property setter: - (void)setHandlesFunctions:(BOOL)functions;	// 0x33fa81fd
@end

