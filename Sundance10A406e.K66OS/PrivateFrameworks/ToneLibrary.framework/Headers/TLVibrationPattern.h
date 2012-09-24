/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <NSObject.h> // Unknown library


@interface TLVibrationPattern : NSObject {
	id _propertyListRepresentation;	// 4 = 0x4
	id _complexPatternDescription;	// 8 = 0x8
	double _duration;	// 12 = 0xc
	id _contextObject;	// 20 = 0x14
	id contextObject;	// 24 = 0x18
}
@property(readonly, assign) id _artificiallyRepeatingPropertyListRepresentation;	// G=0x32a86c71; 
@property(assign, setter=_setDuration:) double _duration;	// G=0x32a87191; S=0x32a871c5; @synthesize
@property(readonly, assign) double computedDuration;	// G=0x32a86dd1; 
@property(retain, nonatomic) id contextObject;	// G=0x32a871f9; S=0x32a87209; @synthesize
@property(readonly, assign, nonatomic) id propertyListRepresentation;	// G=0x32a86bbd; 
+ (id)complexVibrationPatternWithDurationsForVibrationsAndPauses:(double)vibrationsAndPauses;	// 0x32a867a1
+ (BOOL)isValidVibrationPatternPropertyListRepresentation:(id)representation;	// 0x32a86311
+ (id)simpleVibrationPatternWithVibrationDuration:(double)vibrationDuration pauseDuration:(double)duration;	// 0x32a86629
- (id)init;	// 0x32a869e1
- (id)initWithPropertyListRepresentation:(id)propertyListRepresentation;	// 0x32a86a95
- (id)initWithPropertyListRepresentation:(id)propertyListRepresentation skipValidation:(BOOL)validation;	// 0x32a86aa9
// declared property getter: - (id)_artificiallyRepeatingPropertyListRepresentation;	// 0x32a86c71
// declared property getter: - (double)_duration;	// 0x32a87191
// declared property setter: - (void)_setDuration:(double)duration;	// 0x32a871c5
- (void)appendVibrationComponentWithDuration:(double)duration isPause:(BOOL)pause;	// 0x32a86f79
// declared property getter: - (double)computedDuration;	// 0x32a86dd1
// declared property getter: - (id)contextObject;	// 0x32a871f9
- (void)dealloc;	// 0x32a86b45
// declared property getter: - (id)propertyListRepresentation;	// 0x32a86bbd
// declared property setter: - (void)setContextObject:(id)object;	// 0x32a87209
@end
