/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;
@protocol ATVRouteDelegate;

__attribute__((visibility("hidden")))
@interface ATVRoute : NSObject {
@private
	NStatSource *_statSource;	// 4 = 0x4
	NStatCounts _statCounts;	// 8 = 0x8
	NStatCounts _previouStatCounts;	// 84 = 0x54
	unsigned long long _routeID;	// 160 = 0xa0
	unsigned long long _parentRouteID;	// 168 = 0xa8
	unsigned long long _gatewayID;	// 176 = 0xb0
	sockaddr _hostAddress;	// 184 = 0xb8
	union {
		sockaddr sa;
		sockaddr_in sin;
		sockaddr_in6 sin6;
	} _gatewayAddress;	// 200 = 0xc8
	NSString *_interfaceName;	// 228 = 0xe4
	unsigned _flags;	// 232 = 0xe8
	id<ATVRouteDelegate> _delegate;	// 236 = 0xec
	NSString *_destinationIPAddress;	// 240 = 0xf0
	NSString *_gatewayIPAddress;	// 244 = 0xf4
}
@property(assign) id<ATVRouteDelegate> delegate;	// G=0x3294e971; S=0x3294e981; @synthesize=_delegate
@property(retain) NSString *destinationIPAddress;	// G=0x3294ea01; S=0x3294ea15; @synthesize=_destinationIPAddress
@property(retain) NSString *gatewayIPAddress;	// G=0x3294e9c9; S=0x3294e9dd; @synthesize=_gatewayIPAddress
@property(retain) NSString *interfaceName;	// G=0x3294e991; S=0x3294e9a5; @synthesize=_interfaceName
- (id)initWithStatSource:(NStatSource *)statSource;	// 0x3294d9ed
- (void)asyncUpdateCounts;	// 0x3294e955
- (void)configureRoute;	// 0x3294dd71
- (id)cumulativeDescription;	// 0x3294e231
- (id)cumulativeStatsDictionary;	// 0x3294e305
- (void)dealloc;	// 0x3294d965
// declared property getter: - (id)delegate;	// 0x3294e971
- (id)deltaDescription;	// 0x3294e10d
- (id)deltaStatsDictionary;	// 0x3294e4b9
- (id)description;	// 0x3294e221
// declared property getter: - (id)destinationIPAddress;	// 0x3294ea01
// declared property getter: - (id)gatewayIPAddress;	// 0x3294e9c9
// declared property getter: - (id)interfaceName;	// 0x3294e991
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3294e981
// declared property setter: - (void)setDestinationIPAddress:(id)address;	// 0x3294ea15
// declared property setter: - (void)setGatewayIPAddress:(id)address;	// 0x3294e9dd
// declared property setter: - (void)setInterfaceName:(id)name;	// 0x3294e9a5
- (id)statsDictionary;	// 0x3294e2f5
- (void)updateCounts;	// 0x3294e8f5
@end
