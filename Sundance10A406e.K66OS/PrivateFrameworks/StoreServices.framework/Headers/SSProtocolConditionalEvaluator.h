/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class SSProtocolConditionalContext, NSDictionary;

@interface SSProtocolConditionalEvaluator : NSObject {
	SSProtocolConditionalContext *_context;	// 4 = 0x4
	NSDictionary *_dictionary;	// 8 = 0x8
}
+ (id)defaultConditionalContext;	// 0x312b750d
+ (void)setDefaultConditionalContext:(id)context;	// 0x312b7551
- (id)init;	// 0x312b7409
- (id)initWithDictionary:(id)dictionary;	// 0x312b741d
- (id)initWithDictionary:(id)dictionary conditionalContext:(id)context;	// 0x312b7431
- (id)_arrayByEvaluatingChildrenOfArray:(id)array withForcedValue:(int)forcedValue;	// 0x312b75cd
- (BOOL)_checkConditions:(id)conditions withOperator:(id)anOperator;	// 0x312b773d
- (id)_dictionaryByEvaluatingChildrenOfDictionary:(id)dictionary withForcedValue:(int)forcedValue;	// 0x312b78dd
- (id)_dictionaryByEvaluatingDictionary:(id)dictionary withForcedValue:(int)forcedValue;	// 0x312b7a69
- (id)_dictionaryByEvaluatingWithForcedValue:(int)forcedValue;	// 0x312b7afd
- (int)_logicalOperatorForString:(id)string;	// 0x312b7ca1
- (void)dealloc;	// 0x312b74a9
- (id)dictionaryByEvaluatingConditions;	// 0x312b75a5
- (id)dictionaryByRemovingConditions;	// 0x312b75b9
@end

