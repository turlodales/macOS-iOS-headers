//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMAP/IMAPPersistenceTaskOperation.h>

@class ECLocalMessageAction, ECLocalMessageActionResults;

@interface IMAPMessageActionPersistResultsOperation : IMAPPersistenceTaskOperation
{
    ECLocalMessageAction *_messageAction;
    ECLocalMessageActionResults *_results;
    id <IMAPMessageActionPersistResultsOperationDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IMAPMessageActionPersistResultsOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) ECLocalMessageActionResults *results; // @synthesize results=_results;
@property(readonly, nonatomic) ECLocalMessageAction *messageAction; // @synthesize messageAction=_messageAction;
- (void)main;
- (id)initWithDataSource:(id)arg1;
- (id)initWithMessageAction:(id)arg1 results:(id)arg2 dataSource:(id)arg3;

@end

