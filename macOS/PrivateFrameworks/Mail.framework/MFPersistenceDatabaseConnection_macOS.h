//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EDPersistenceDatabaseConnection.h"

@class NSArray;

@interface MFPersistenceDatabaseConnection_macOS : EDPersistenceDatabaseConnection
{
    NSArray *_searchContext;
    BOOL _databaseIsRemote;
    BOOL _needsUnreadCountUpdate;
    double _busyStartTime;
}

- (void).cxx_destruct;
@property(nonatomic) double busyStartTime; // @synthesize busyStartTime=_busyStartTime;
@property(nonatomic) BOOL needsUnreadCountUpdate; // @synthesize needsUnreadCountUpdate=_needsUnreadCountUpdate;
- (BOOL)detachProtectedDatabase;
- (BOOL)attachProtectedDatabaseWithName:(id)arg1;
- (BOOL)protectedDatabaseAttached;
- (void)handleSQLResult:(int)arg1 message:(id)arg2;
- (BOOL)performUsingTransaction:(BOOL)arg1 isWriter:(BOOL)arg2 transactionError:(id *)arg3 block:(CDUnknownBlockType)arg4;
- (unsigned int)_cacheSize;
- (unsigned int)_pageSize;
- (BOOL)_pathIsRemote:(id)arg1;
- (void)vacuum;
- (int)configureSQLConnection;
- (void)dealloc;
- (id)initWithBasePath:(id)arg1 databaseName:(id)arg2 isWriter:(BOOL)arg3 delegate:(id)arg4;

@end

