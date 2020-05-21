//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SiriCoreSQLiteColumnConstraint : NSObject <NSCopying>
{
    NSString *_name;
    long long _type;
    id <SiriCoreSQLiteValue> _value;
    unsigned long long _options;
}

+ (id)defaultColumnConstraintWithName:(id)arg1 value:(id)arg2;
+ (id)uniqueColumnConstraintWithName:(id)arg1;
+ (id)notNullColumnConstraintWithName:(id)arg1;
+ (id)primaryKeyColumnConstraintWithName:(id)arg1 usesAutoIncrement:(BOOL)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, copy, nonatomic) id <SiriCoreSQLiteValue> value; // @synthesize value=_value;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 type:(long long)arg2 value:(id)arg3 options:(unsigned long long)arg4;

@end

