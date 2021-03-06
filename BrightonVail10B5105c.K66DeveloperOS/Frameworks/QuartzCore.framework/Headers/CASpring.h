/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "NSMutableCopying.h"

@class CAValueFunction, CALayer, NSString;

@interface CASpring : NSObject <NSCopying, NSMutableCopying, NSCoding> {
	NSString *_name;	// 4 = 0x4
	CALayer *_layerA;	// 8 = 0x8
	CALayer *_layerB;	// 12 = 0xc
	CGPoint _attachmentPointA;	// 16 = 0x10
	CGPoint _attachmentPointB;	// 24 = 0x18
	CAValueFunction *_function;	// 32 = 0x20
	float _stiffness;	// 36 = 0x24
	float _damping;	// 40 = 0x28
	float _restLength;	// 44 = 0x2c
	BOOL _enabled;	// 48 = 0x30
	id _delegate;	// 52 = 0x34
	void *_priv;	// 56 = 0x38
}
@property(assign) CGPoint attachmentPointA;	// G=0x352788e9; S=0x35278901; 
@property(assign) CGPoint attachmentPointB;	// G=0x35278915; S=0x3527892d; 
@property(assign) float damping;	// G=0x35278961; S=0x35278971; 
@property(assign) id delegate;	// G=0x352789f5; S=0x35278a05; 
@property(assign, getter=isEnabled) BOOL enabled;	// G=0x35278819; S=0x35278829; 
@property(retain) CAValueFunction *function;	// G=0x352789a1; S=0x352789b1; 
@property(retain) CALayer *layerA;	// G=0x35278841; S=0x35278851; 
@property(retain) CALayer *layerB;	// G=0x35278895; S=0x352788a5; 
@property(copy) NSString *name;	// G=0x352787c5; S=0x352787d5; 
@property(assign) float restLength;	// G=0x35278981; S=0x35278991; 
@property(assign) float stiffness;	// G=0x35278941; S=0x35278951; 
+ (id)defaultValueForKey:(id)key;	// 0x352786fd
+ (id)spring;	// 0x352786c5
- (id)init;	// 0x35278701
- (id)initWithCoder:(id)coder;	// 0x3527908d
- (id).cxx_construct;	// 0x35279335
- (Object *)CA_copyRenderValue;	// 0x35278aa1
// declared property getter: - (CGPoint)attachmentPointA;	// 0x352788e9
// declared property getter: - (CGPoint)attachmentPointB;	// 0x35278915
- (id)copyWithZone:(NSZone *)zone;	// 0x35278cd9
// declared property getter: - (float)damping;	// 0x35278961
- (void)dealloc;	// 0x35278a15
// declared property getter: - (id)delegate;	// 0x352789f5
- (void)encodeWithCoder:(id)coder;	// 0x35278e49
// declared property getter: - (id)function;	// 0x352789a1
// declared property getter: - (BOOL)isEnabled;	// 0x35278819
// declared property getter: - (id)layerA;	// 0x35278841
// declared property getter: - (id)layerB;	// 0x35278895
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x35278e39
// declared property getter: - (id)name;	// 0x352787c5
// declared property getter: - (float)restLength;	// 0x35278981
// declared property setter: - (void)setAttachmentPointA:(CGPoint)a;	// 0x35278901
// declared property setter: - (void)setAttachmentPointB:(CGPoint)b;	// 0x3527892d
// declared property setter: - (void)setDamping:(float)damping;	// 0x35278971
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x35278a05
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x35278829
// declared property setter: - (void)setFunction:(id)function;	// 0x352789b1
// declared property setter: - (void)setLayerA:(id)a;	// 0x35278851
// declared property setter: - (void)setLayerB:(id)b;	// 0x352788a5
// declared property setter: - (void)setName:(id)name;	// 0x352787d5
// declared property setter: - (void)setRestLength:(float)length;	// 0x35278991
// declared property setter: - (void)setStiffness:(float)stiffness;	// 0x35278951
- (void)setValue:(id)value forKey:(id)key;	// 0x35278c8d
- (void)setValue:(id)value forKeyPath:(id)keyPath;	// 0x35278ccd
// declared property getter: - (float)stiffness;	// 0x35278941
- (id)valueForKey:(id)key;	// 0x35278c59
- (id)valueForKeyPath:(id)keyPath;	// 0x35278cc5
@end

