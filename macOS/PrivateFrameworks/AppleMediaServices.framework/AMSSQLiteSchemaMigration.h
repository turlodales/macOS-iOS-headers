//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AMSSQLiteConnection, NSError;

__attribute__((visibility("hidden")))
@interface AMSSQLiteSchemaMigration : NSObject
{
    AMSSQLiteConnection *_connection;
    NSError *_error;
    BOOL _success;
}

- (void).cxx_destruct;
@property(readonly) BOOL success; // @synthesize success=_success;
@property(readonly) NSError *error; // @synthesize error=_error;
- (void)_executeStatement:(id)arg1 canFailMigration:(BOOL)arg2 bindings:(CDUnknownBlockType)arg3;
- (void)executeStatement:(id)arg1 bindings:(CDUnknownBlockType)arg2;
- (void)executeStatement:(id)arg1;
- (void)executeOptionalStatement:(id)arg1 bindings:(CDUnknownBlockType)arg2;
- (void)executeOptionalStatement:(id)arg1;
- (id)initWithConnection:(id)arg1;

@end

