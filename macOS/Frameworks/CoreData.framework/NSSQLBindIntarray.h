//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface NSSQLBindIntarray : NSObject
{
    unsigned int _index;
    id _value;
    NSString *_tableName;
}

@property(retain) NSString *tableName; // @synthesize tableName=_tableName;
@property(retain) id value; // @synthesize value=_value;
@property unsigned int index; // @synthesize index=_index;
- (void)dealloc;
- (id)initWithValue:(id)arg1;

@end

