/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDProcessor.h"
#import "OfficeImport-Structs.h"


@interface CHPSeriesDateTimeFormatting : EDProcessor {
}
- (void)applyProcessorToObject:(id)object sheet:(id)sheet;	// 0x34fd2add
- (bool)isDateTimeFomrattingInData:(id)data;	// 0x34fd2bd9
- (bool)isDateTimeFormattingInContentFormatString:(id)contentFormatString edCell:(EDCellHeader *)cell;	// 0x34fd2d45
- (bool)isObjectSupported:(id)supported;	// 0x34fd02b5
@end

