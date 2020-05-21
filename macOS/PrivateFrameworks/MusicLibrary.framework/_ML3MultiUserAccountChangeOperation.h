//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSVAsyncOperation.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _ML3MultiUserAccountChangeOperation : MSVAsyncOperation
{
    NSString *_databasePath;
    id <MLMediaLibraryAccountChangeObserver> _accountChangeObserver;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MLMediaLibraryAccountChangeObserver> accountChangeObserver; // @synthesize accountChangeObserver=_accountChangeObserver;
@property(readonly, copy, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
- (void)execute;
- (id)initWithDatabasePath:(id)arg1 accountChangeObserver:(id)arg2;

@end

