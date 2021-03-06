/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

#import <NSObject.h> // Unknown library


@interface IMUserNotification : NSObject {
	id _reserved;	// 4 = 0x4
}
+ (id)userNotificationWithIdentifier:(id)identifier timeout:(double)timeout alertLevel:(unsigned)level displayFlags:(unsigned)flags displayInformation:(id)information;	// 0x3120e279
+ (id)userNotificationWithIdentifier:(id)identifier title:(id)title message:(id)message defaultButton:(id)button alternateButton:(id)button5 otherButton:(id)button6;	// 0x3120e169
- (id)_initWithIdentifier:(id)identifier timeout:(double)timeout displayFlags:(unsigned)flags displayInformation:(id)information;	// 0x3120e31d
- (void)_setResponseFlags:(unsigned)flags responseInformation:(id)information;	// 0x3120df8d
- (void)dealloc;	// 0x3120e2d5
- (unsigned)displayFlags;	// 0x3120e0cd
- (id)displayInformation;	// 0x3120e0a1
- (id)identifier;	// 0x3120e13d
- (unsigned)response;	// 0x3120e089
- (unsigned)responseFlags;	// 0x3120e051
- (id)responseInformation;	// 0x3120e025
- (double)timeout;	// 0x3120e105
@end

