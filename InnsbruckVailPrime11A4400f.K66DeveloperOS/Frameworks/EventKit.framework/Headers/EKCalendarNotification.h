/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import </libobjc.A.h>
#import "EventKit-Structs.h"
#import "EKIdentityProtocol.h"

@class NSURL, EKObjectID, NSString;

__attribute__((visibility("hidden")))
@interface EKCalendarNotification : NSObject <EKIdentityProtocol> {
	int _type;	// 4 = 0x4
	NSString *_title;	// 8 = 0x8
	NSString *_name;	// 12 = 0xc
	NSString *_emailAddress;	// 16 = 0x10
	NSURL *_URI;	// 20 = 0x14
	EKObjectID *_objectID;	// 24 = 0x18
	CGColorRef _dotColor;	// 28 = 0x1c
	BOOL _hiddenFromNotificationCenter;	// 32 = 0x20
	BOOL _alerted;	// 33 = 0x21
}
@property(retain, nonatomic) NSURL *URI;	// G=0x2db18695; S=0x2db186a5; @synthesize=_URI
@property(assign, nonatomic) BOOL alerted;	// G=0x2db18705; S=0x2db18715; @synthesize=_alerted
@property(assign, nonatomic) CGColorRef dotColor;	// G=0x2db186d5; S=0x2db185c1; @synthesize=_dotColor
@property(retain, nonatomic) NSString *emailAddress;	// G=0x2db18675; S=0x2db18685; @synthesize=_emailAddress
@property(assign, nonatomic) BOOL hiddenFromNotificationCenter;	// G=0x2db186e5; S=0x2db186f5; @synthesize=_hiddenFromNotificationCenter
@property(retain, nonatomic) NSString *name;	// G=0x2db18655; S=0x2db18665; @synthesize=_name
@property(readonly, assign, nonatomic) BOOL needsAlert;	// G=0x2db185f1; 
@property(retain, nonatomic) EKObjectID *objectID;	// G=0x2db186b5; S=0x2db186c5; @synthesize=_objectID
@property(retain, nonatomic) NSString *title;	// G=0x2db18635; S=0x2db18645; @synthesize=_title
@property(assign, nonatomic) int type;	// G=0x2db18615; S=0x2db18625; @synthesize=_type
- (id)initWithType:(int)type;	// 0x2db184d1
// declared property getter: - (id)URI;	// 0x2db18695
// declared property getter: - (BOOL)alerted;	// 0x2db18705
- (void)dealloc;	// 0x2db18519
// declared property getter: - (CGColorRef)dotColor;	// 0x2db186d5
// declared property getter: - (id)emailAddress;	// 0x2db18675
// declared property getter: - (BOOL)hiddenFromNotificationCenter;	// 0x2db186e5
// declared property getter: - (id)name;	// 0x2db18655
// declared property getter: - (BOOL)needsAlert;	// 0x2db185f1
// declared property getter: - (id)objectID;	// 0x2db186b5
// declared property setter: - (void)setAlerted:(BOOL)alerted;	// 0x2db18715
// declared property setter: - (void)setDotColor:(CGColorRef)color;	// 0x2db185c1
// declared property setter: - (void)setEmailAddress:(id)address;	// 0x2db18685
// declared property setter: - (void)setHiddenFromNotificationCenter:(BOOL)notificationCenter;	// 0x2db186f5
// declared property setter: - (void)setName:(id)name;	// 0x2db18665
// declared property setter: - (void)setObjectID:(id)anId;	// 0x2db186c5
// declared property setter: - (void)setTitle:(id)title;	// 0x2db18645
// declared property setter: - (void)setType:(int)type;	// 0x2db18625
// declared property setter: - (void)setURI:(id)uri;	// 0x2db186a5
// declared property getter: - (id)title;	// 0x2db18635
// declared property getter: - (int)type;	// 0x2db18615
@end
