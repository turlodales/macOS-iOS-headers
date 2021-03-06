//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenReaderCore/SCRCMathRowExpression.h>

__attribute__((visibility("hidden")))
@interface SCRCMathTableCellExpression : SCRCMathRowExpression
{
    BOOL _didGetTablePosition;
    unsigned long long _rowIndex;
    unsigned long long _columnIndex;
    unsigned long long _tableRowCount;
    unsigned long long _tableColumnCount;
}

- (id)mathMLTag;
- (id)suffixForChildAtIndex:(unsigned long long)arg1;
- (id)prefixForChildAtIndex:(unsigned long long)arg1;
- (id)_suffixForCell;
- (id)_prefixForCell;
- (id)speakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3;
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(BOOL)arg2;
- (void)_getTableDataIfNecessary;

@end

