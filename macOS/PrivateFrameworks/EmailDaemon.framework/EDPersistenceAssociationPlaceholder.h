//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EFSQLColumnSchema, NSString;

@interface EDPersistenceAssociationPlaceholder : NSObject
{
    EFSQLColumnSchema *_column;
    NSString *_tableName;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *tableName; // @synthesize tableName=_tableName;
@property(readonly, nonatomic) EFSQLColumnSchema *column; // @synthesize column=_column;
- (BOOL)resolveWithSchema:(id)arg1;
- (id)description;
- (id)initWithColumn:(id)arg1 tableName:(id)arg2;

@end

