/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class SACalendar, NSNumber, SAUIAppPunchOut, NSURL;

@interface SARestaurantOpening : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSURL *bookingId;	// G=0x355d3a69; S=0x355d3ae5; 
@property(retain, nonatomic) SAUIAppPunchOut *makeReservationPunchOut;	// G=0x355d3b45; S=0x355d3b99; 
@property(copy, nonatomic) NSNumber *partySize;	// G=0x355d3bd5; S=0x355d3bf1; 
@property(retain, nonatomic) SACalendar *timeSlot;	// G=0x355d3c41; S=0x355d3c95; 
+ (id)opening;	// 0x355d39d9
+ (id)openingWithDictionary:(id)dictionary context:(id)context;	// 0x355d3a1d
// declared property getter: - (id)bookingId;	// 0x355d3a69
- (id)encodedClassName;	// 0x355d39cd
- (id)groupIdentifier;	// 0x355d39bd
// declared property getter: - (id)makeReservationPunchOut;	// 0x355d3b45
// declared property getter: - (id)partySize;	// 0x355d3bd5
// declared property setter: - (void)setBookingId:(id)anId;	// 0x355d3ae5
// declared property setter: - (void)setMakeReservationPunchOut:(id)anOut;	// 0x355d3b99
// declared property setter: - (void)setPartySize:(id)size;	// 0x355d3bf1
// declared property setter: - (void)setTimeSlot:(id)slot;	// 0x355d3c95
// declared property getter: - (id)timeSlot;	// 0x355d3c41
@end
