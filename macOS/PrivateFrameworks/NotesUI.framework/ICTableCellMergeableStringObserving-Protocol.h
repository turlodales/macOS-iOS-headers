//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesUI/NSObject-Protocol.h>

@class NSUUID;
@protocol ICTableUndoHelping;

@protocol ICTableCellMergeableStringObserving <NSObject>
@property(readonly, nonatomic) BOOL shouldPreventUndoCommands;
@property(readonly, nonatomic) id <ICTableUndoHelping> undoHelper;
- (void)tableCellWasEditedAtColumnID:(NSUUID *)arg1 rowID:(NSUUID *)arg2 edited:(unsigned long long)arg3 range:(struct _NSRange)arg4 changeInLength:(long long)arg5;
@end

