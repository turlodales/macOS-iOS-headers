//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EFSQLRow;

@protocol EDMessageReadHookResponder <NSObject>
- (void)persistenceWillReadMessage:(id <EDLibraryMessage>)arg1 fromRow:(EFSQLRow *)arg2;
@end

