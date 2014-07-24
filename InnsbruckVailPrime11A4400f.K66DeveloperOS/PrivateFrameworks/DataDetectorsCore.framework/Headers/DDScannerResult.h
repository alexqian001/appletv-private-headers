/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
 */

#import "DataDetectorsCore-Structs.h"
#import </libobjc.A.h>
#import "NSCoding.h"
#import "NSSecureCoding.h"

@class NSArray;

@interface DDScannerResult : NSObject <NSCoding, NSSecureCoding> {
	DDResult *_coreResult;	// 4 = 0x4
	NSArray *_subResultsCache;	// 8 = 0x8
}
@property(readonly, assign) DDResult *coreResult;	// G=0x3094edb5; converted property
@property(assign) DDQueryRange queryRange;	// G=0x3094ee61; S=0x3094ee05; 
@property(assign) NSRange range;	// G=0x3094edc5; S=0x3094eded; 
@property(retain) id subResults;	// G=0x3094f0e5; S=0x3094f211; converted property
@property(retain) id type;	// G=0x3094eea5; S=0x3094eeb9; converted property
+ (id)resultFromCoreResult:(DDResult *)coreResult;	// 0x3094eb81
+ (id)resultsFromCoreResults:(CFArrayRef)coreResults;	// 0x3094ebbd
+ (BOOL)supportsSecureCoding;	// 0x3094fd75
- (id)init;	// 0x3094ec85
- (id)initWithCoder:(id)coder;	// 0x3094fb5d
- (id)initWithCoreResult:(DDResult *)coreResult;	// 0x3094ecc9
- (DDQueryOffset)cfRange;	// 0x3094ee79
- (id)contextualData;	// 0x3094ef09
- (id)copyWithZone:(NSZone *)zone;	// 0x3094ed9d
// converted property getter: - (DDResult *)coreResult;	// 0x3094edb5
- (id)dateFromReferenceDate:(id)referenceDate referenceTimezone:(id)timezone timezoneRef:(id *)ref allDayRef:(BOOL *)ref4;	// 0x3094f479
- (void)dealloc;	// 0x3094ed39
- (id)description;	// 0x3094ef31
- (void)encodeWithCoder:(id)coder;	// 0x3094fa01
- (BOOL)extractStartDate:(id *)date startTimezone:(id *)timezone endDate:(id *)date3 endTimezone:(id *)timezone4 allDayRef:(BOOL *)ref referenceDate:(id)date6 referenceTimezone:(id)timezone7;	// 0x3094f525
- (double)getDuration;	// 0x3094f429
- (BOOL)getIMScreenNameValue:(id *)value type:(id *)type;	// 0x3094f7a1
- (BOOL)getMailValue:(id *)value label:(id *)label;	// 0x3094f6ed
- (BOOL)getPhoneValue:(id *)value label:(id *)label;	// 0x3094f645
- (BOOL)getStreet:(id *)street city:(id *)city state:(id *)state zip:(id *)zip country:(id *)country;	// 0x3094f871
- (BOOL)isEqual:(id)equal;	// 0x3094eff9
- (id)location;	// 0x3094eef5
- (id)matchedString;	// 0x3094ef1d
// declared property getter: - (DDQueryRange)queryRange;	// 0x3094ee61
// declared property getter: - (NSRange)range;	// 0x3094edc5
- (id)rawValue;	// 0x3094eee1
- (long)score;	// 0x3094ee91
// declared property setter: - (void)setQueryRange:(DDQueryRange)range;	// 0x3094ee05
// declared property setter: - (void)setRange:(NSRange)range;	// 0x3094eded
// converted property setter: - (void)setSubResults:(id)results;	// 0x3094f211
// converted property setter: - (void)setType:(id)type;	// 0x3094eeb9
// converted property getter: - (id)subResults;	// 0x3094f0e5
// converted property getter: - (id)type;	// 0x3094eea5
- (id)value;	// 0x3094eecd
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x3094f339
@end
