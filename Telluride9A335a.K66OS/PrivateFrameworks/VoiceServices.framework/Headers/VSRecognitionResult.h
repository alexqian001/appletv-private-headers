/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <NSObject.h> // Unknown library


@interface VSRecognitionResult : NSObject {
}
@property(retain) id recognitionAction;	// G=0x305d8069; S=0x305d8061; converted property
+ (void)initialize;	// 0x305d8089
+ (id)recognitionResultWithModelIdentifier:(id)modelIdentifier classIdentifiers:(id)identifiers values:(id)values;	// 0x305d80b5
- (id)init;	// 0x305d7cb1
- (id)createHandler;	// 0x305d7f45
- (id)description;	// 0x305d806d
- (int)elementCount;	// 0x305d7f15
- (BOOL)getElementClassIdentifier:(id *)identifier value:(id *)value atIndex:(int)index;	// 0x305d7f19
- (unsigned)hash;	// 0x305d7cc9
- (BOOL)isEqual:(id)equal;	// 0x305d7cb5
- (id)modelIdentifier;	// 0x305d7f11
// converted property getter: - (id)recognitionAction;	// 0x305d8069
- (id)recognitionResultByReplacingValueForClassIdentifier:(id)classIdentifier withValue:(id)value;	// 0x305d7ce5
- (oneway void)release;	// 0x305d7cdd
- (id)retain;	// 0x305d7ccd
- (unsigned)retainCount;	// 0x305d7ce1
// converted property setter: - (void)setRecognitionAction:(id)action;	// 0x305d8061
- (id)valueOfFirstElementWithClassIdentifier:(id)classIdentifier;	// 0x305d7e91
@end
