/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSArray;

@interface WebEvent : NSObject {
	int _type;	// 4 = 0x4
	double _timestamp;	// 8 = 0x8
	CGPoint _locationInWindow;	// 16 = 0x10
	NSString *_characters;	// 24 = 0x18
	NSString *_charactersIgnoringModifiers;	// 28 = 0x1c
	unsigned _modifierFlags;	// 32 = 0x20
	BOOL _keyRepeating;	// 36 = 0x24
	BOOL _popupVariant;	// 37 = 0x25
	unsigned short _keyCode;	// 38 = 0x26
	BOOL _tabKey;	// 40 = 0x28
	int _characterSet;	// 44 = 0x2c
	float _deltaX;	// 48 = 0x30
	float _deltaY;	// 52 = 0x34
	unsigned _touchCount;	// 56 = 0x38
	NSArray *_touchLocations;	// 60 = 0x3c
	NSArray *_touchIdentifiers;	// 64 = 0x40
	NSArray *_touchPhases;	// 68 = 0x44
	BOOL _isGesture;	// 72 = 0x48
	float _gestureScale;	// 76 = 0x4c
	float _gestureRotation;	// 80 = 0x50
}
@property(readonly, assign, nonatomic) int characterSet;	// G=0x312bdfb1; 
@property(readonly, assign, nonatomic) NSString *characters;	// G=0x312bdf01; 
@property(readonly, assign, nonatomic) NSString *charactersIgnoringModifiers;	// G=0x312bdf39; 
@property(readonly, assign, nonatomic) float deltaX;	// G=0x312bdfc1; 
@property(readonly, assign, nonatomic) float deltaY;	// G=0x312bdfd1; 
@property(readonly, assign, nonatomic) float gestureRotation;	// G=0x30c062f1; 
@property(readonly, assign, nonatomic) float gestureScale;	// G=0x30c062e1; 
@property(readonly, assign, nonatomic) BOOL isGesture;	// G=0x30c06301; 
@property(readonly, assign, nonatomic) unsigned short keyCode;	// G=0x312bdf91; 
@property(readonly, assign, nonatomic, getter=isKeyRepeating) BOOL keyRepeating;	// G=0x312bdf71; 
@property(readonly, assign, nonatomic) CGPoint locationInWindow;	// G=0x30c06011; 
@property(readonly, assign, nonatomic) unsigned modifierFlags;	// G=0x30c06311; 
@property(readonly, assign, nonatomic, getter=isPopupVariant) BOOL popupVariant;	// G=0x312bdf81; 
@property(readonly, assign, nonatomic, getter=isTabKey) BOOL tabKey;	// G=0x312bdfa1; 
@property(readonly, assign, nonatomic) double timestamp;	// G=0x312bdfe1; @synthesize=_timestamp
@property(readonly, assign, nonatomic) unsigned touchCount;	// G=0x30c062d1; 
@property(readonly, assign, nonatomic) NSArray *touchIdentifiers;	// G=0x30c063b9; 
@property(readonly, assign, nonatomic) NSArray *touchLocations;	// G=0x30c06321; 
@property(readonly, assign, nonatomic) NSArray *touchPhases;	// G=0x30c063c9; 
@property(readonly, assign, nonatomic) int type;	// G=0x30c06001; @synthesize=_type
- (id)initWithKeyEventType:(int)keyEventType timeStamp:(double)stamp characters:(id)characters charactersIgnoringModifiers:(id)modifiers modifiers:(unsigned)modifiers5 isRepeating:(BOOL)repeating isPopupVariant:(BOOL)variant keyCode:(unsigned short)code isTabKey:(BOOL)key characterSet:(int)set;	// 0x312bd44d
- (id)initWithMouseEventType:(int)mouseEventType timeStamp:(double)stamp location:(CGPoint)location;	// 0x312bd1d9
- (id)initWithScrollWheelEventWithTimeStamp:(double)timeStamp location:(CGPoint)location deltaX:(float)x deltaY:(float)y;	// 0x312bd24d
- (id)initWithTouchEventType:(int)touchEventType timeStamp:(double)stamp location:(CGPoint)location modifiers:(unsigned)modifiers touchCount:(unsigned)count touchLocations:(id)locations touchIdentifiers:(id)identifiers touchPhases:(id)phases isGesture:(BOOL)gesture gestureScale:(float)scale gestureRotation:(float)rotation;	// 0x312bd2f1
- (id).cxx_construct;	// 0x312bdff9
- (id)_characterSetDescription;	// 0x312bd6f5
- (id)_eventDescription;	// 0x312bdb91
- (id)_modiferFlagsDescription;	// 0x312bd651
- (id)_touchIdentifiersDescription;	// 0x312bd8d1
- (id)_touchLocationsDescription:(id)description;	// 0x312bd769
- (id)_touchPhaseDescription:(int)description;	// 0x312bd9fd
- (id)_touchPhasesDescription;	// 0x312bda51
- (id)_typeDescription;	// 0x312bd5ad
// declared property getter: - (int)characterSet;	// 0x312bdfb1
// declared property getter: - (id)characters;	// 0x312bdf01
// declared property getter: - (id)charactersIgnoringModifiers;	// 0x312bdf39
- (void)dealloc;	// 0x30c0816d
// declared property getter: - (float)deltaX;	// 0x312bdfc1
// declared property getter: - (float)deltaY;	// 0x312bdfd1
- (id)description;	// 0x312bde71
// declared property getter: - (float)gestureRotation;	// 0x30c062f1
// declared property getter: - (float)gestureScale;	// 0x30c062e1
// declared property getter: - (BOOL)isGesture;	// 0x30c06301
// declared property getter: - (BOOL)isKeyRepeating;	// 0x312bdf71
// declared property getter: - (BOOL)isPopupVariant;	// 0x312bdf81
// declared property getter: - (BOOL)isTabKey;	// 0x312bdfa1
// declared property getter: - (unsigned short)keyCode;	// 0x312bdf91
// declared property getter: - (CGPoint)locationInWindow;	// 0x30c06011
// declared property getter: - (unsigned)modifierFlags;	// 0x30c06311
// declared property getter: - (double)timestamp;	// 0x312bdfe1
// declared property getter: - (unsigned)touchCount;	// 0x30c062d1
// declared property getter: - (id)touchIdentifiers;	// 0x30c063b9
// declared property getter: - (id)touchLocations;	// 0x30c06321
// declared property getter: - (id)touchPhases;	// 0x30c063c9
// declared property getter: - (int)type;	// 0x30c06001
@end
