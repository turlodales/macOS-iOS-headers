//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol ABCommandVisitor <NSObject>
- (void)visitUndoableSaveCNRequestCommand:(id <CNUISaveRequestCommand>)arg1;
- (void)visitSaveCNRequestCommand:(id <CNUISaveRequestCommand>)arg1;
- (void)visitSaveRequestCommand:(id <ABSaveRequestCommand>)arg1;
- (void)visitUndoableCommand:(id <ABUndoableCommand>)arg1;
- (void)visitCommand:(id <ABCommand>)arg1;
@end

