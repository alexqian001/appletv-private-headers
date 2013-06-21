/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

#import <NSObject.h> // Unknown library

@class NSString, NSDate, NSNumber;

@interface DAStatusReport : NSObject {
	NSString *_persistentUUID;	// 4 = 0x4
	NSString *_displayName;	// 8 = 0x8
	NSString *_accountType;	// 12 = 0xc
	NSNumber *_timeSpan;	// 16 = 0x10
	NSNumber *_timeInNetworking;	// 20 = 0x14
	NSNumber *_averageHBI;	// 24 = 0x18
	NSNumber *_successfulRequests;	// 28 = 0x1c
	NSNumber *_failedNetworkRequests;	// 32 = 0x20
	NSNumber *_failedProtocolRequests;	// 36 = 0x24
	NSNumber *_downloadedElements;	// 40 = 0x28
	NSNumber *_falseMoreAvailableCount;	// 44 = 0x2c
	NSDate *_creationDate;	// 48 = 0x30
	int _numHBIDataPoints;	// 52 = 0x34
}
@property(retain) NSString *accountType;	// G=0x33a7c035; S=0x33a7c049; @synthesize=_accountType
@property(retain) NSNumber *averageHBI;	// G=0x33a7c08d; S=0x33a7c0a1; @synthesize=_averageHBI
@property(retain) NSString *displayName;	// G=0x33a7c011; S=0x33a7c025; @synthesize=_displayName
@property(retain) NSNumber *downloadedElements;	// G=0x33a7c11d; S=0x33a7c131; @synthesize=_downloadedElements
@property(retain) NSNumber *failedNetworkRequests;	// G=0x33a7c0d5; S=0x33a7c0e9; @synthesize=_failedNetworkRequests
@property(retain) NSNumber *failedProtocolRequests;	// G=0x33a7c0f9; S=0x33a7c10d; @synthesize=_failedProtocolRequests
@property(retain) NSNumber *falseMoreAvailableCount;	// G=0x33a7c141; S=0x33a7c155; @synthesize=_falseMoreAvailableCount
@property(retain) NSString *persistentUUID;	// G=0x33a7bfed; S=0x33a7c001; @synthesize=_persistentUUID
@property(retain) NSNumber *successfulRequests;	// G=0x33a7c0b1; S=0x33a7c0c5; @synthesize=_successfulRequests
@property(retain) NSNumber *timeInNetworking;	// G=0x33a7c069; S=0x33a7c07d; @synthesize=_timeInNetworking
@property(retain, nonatomic) NSNumber *timeSpan;	// G=0x33a7bc4d; S=0x33a7c059; @synthesize=_timeSpan
- (id)init;	// 0x33a7b0a5
- (id)initWithDictionaryRepresentation:(id)dictionaryRepresentation;	// 0x33a7b111
// declared property getter: - (id)accountType;	// 0x33a7c035
// declared property getter: - (id)averageHBI;	// 0x33a7c08d
- (void)dealloc;	// 0x33a7b30d
- (id)description;	// 0x33a7bbe5
- (id)dictionaryRepresentation;	// 0x33a7b439
// declared property getter: - (id)displayName;	// 0x33a7c011
// declared property getter: - (id)downloadedElements;	// 0x33a7c11d
// declared property getter: - (id)failedNetworkRequests;	// 0x33a7c0d5
// declared property getter: - (id)failedProtocolRequests;	// 0x33a7c0f9
// declared property getter: - (id)falseMoreAvailableCount;	// 0x33a7c141
- (void)mergeStatusReport:(id)report;	// 0x33a7b70d
- (void)noteFailedNetworkRequest;	// 0x33a7bdb5
- (void)noteFailedProtocolRequest;	// 0x33a7be15
- (void)noteFalseMoreAvailableResponse;	// 0x33a7bf8d
- (void)noteNewHBIDataPoint:(int)point;	// 0x33a7be75
- (void)noteSuccessfulRequestWithNumDownloadedElements:(int)numDownloadedElements;	// 0x33a7bcfd
- (void)noteTimeSpentInNetworking:(double)networking;	// 0x33a7bf11
// declared property getter: - (id)persistentUUID;	// 0x33a7bfed
// declared property setter: - (void)setAccountType:(id)type;	// 0x33a7c049
// declared property setter: - (void)setAverageHBI:(id)hbi;	// 0x33a7c0a1
// declared property setter: - (void)setDisplayName:(id)name;	// 0x33a7c025
// declared property setter: - (void)setDownloadedElements:(id)elements;	// 0x33a7c131
// declared property setter: - (void)setFailedNetworkRequests:(id)requests;	// 0x33a7c0e9
// declared property setter: - (void)setFailedProtocolRequests:(id)requests;	// 0x33a7c10d
// declared property setter: - (void)setFalseMoreAvailableCount:(id)count;	// 0x33a7c155
// declared property setter: - (void)setPersistentUUID:(id)uuid;	// 0x33a7c001
// declared property setter: - (void)setSuccessfulRequests:(id)requests;	// 0x33a7c0c5
// declared property setter: - (void)setTimeInNetworking:(id)networking;	// 0x33a7c07d
// declared property setter: - (void)setTimeSpan:(id)span;	// 0x33a7c059
// declared property getter: - (id)successfulRequests;	// 0x33a7c0b1
// declared property getter: - (id)timeInNetworking;	// 0x33a7c069
// declared property getter: - (id)timeSpan;	// 0x33a7bc4d
@end
