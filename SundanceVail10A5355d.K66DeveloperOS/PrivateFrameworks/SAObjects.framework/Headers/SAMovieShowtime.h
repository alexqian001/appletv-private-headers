/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class SACalendar, NSNumber, SAUIAppPunchOut;

@interface SAMovieShowtime : AceObject <SAAceSerializable> {
}
@property(retain, nonatomic) SAUIAppPunchOut *buyTicketsPunchout;	// G=0x3663f8f9; S=0x3663f94d; 
@property(copy, nonatomic) NSNumber *childTicketQuantity;	// G=0x3663f989; S=0x3663f9a5; 
@property(assign, nonatomic) BOOL is3d;	// G=0x3663f9f5; S=0x3663fa6d; 
@property(assign, nonatomic) BOOL isImax;	// G=0x3663fab1; S=0x3663fb29; 
@property(copy, nonatomic) NSNumber *regularTicketQuantity;	// G=0x3663fb6d; S=0x3663fb89; 
@property(copy, nonatomic) NSNumber *seniorTicketQuantity;	// G=0x3663fbd9; S=0x3663fbf5; 
@property(retain, nonatomic) SACalendar *showtime;	// G=0x3663fc45; S=0x3663fc99; 
+ (id)showtime;	// 0x3663f869
+ (id)showtimeWithDictionary:(id)dictionary context:(id)context;	// 0x3663f8ad
// declared property getter: - (id)buyTicketsPunchout;	// 0x3663f8f9
// declared property getter: - (id)childTicketQuantity;	// 0x3663f989
- (id)encodedClassName;	// 0x3663f85d
- (id)groupIdentifier;	// 0x3663f84d
// declared property getter: - (BOOL)is3d;	// 0x3663f9f5
// declared property getter: - (BOOL)isImax;	// 0x3663fab1
// declared property getter: - (id)regularTicketQuantity;	// 0x3663fb6d
// declared property getter: - (id)seniorTicketQuantity;	// 0x3663fbd9
// declared property setter: - (void)setBuyTicketsPunchout:(id)punchout;	// 0x3663f94d
// declared property setter: - (void)setChildTicketQuantity:(id)quantity;	// 0x3663f9a5
// declared property setter: - (void)setIs3d:(BOOL)d;	// 0x3663fa6d
// declared property setter: - (void)setIsImax:(BOOL)imax;	// 0x3663fb29
// declared property setter: - (void)setRegularTicketQuantity:(id)quantity;	// 0x3663fb89
// declared property setter: - (void)setSeniorTicketQuantity:(id)quantity;	// 0x3663fbf5
// declared property setter: - (void)setShowtime:(id)showtime;	// 0x3663fc99
// declared property getter: - (id)showtime;	// 0x3663fc45
@end

