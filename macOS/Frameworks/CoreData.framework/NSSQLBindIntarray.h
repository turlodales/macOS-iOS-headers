//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSSQLBindIntarray : NSObject
{
    unsigned int _index;
    id _value;
    NSString *_tableName;
}

@property(retain, nonatomic) NSString *tableName; // @synthesize tableName=_tableName;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(nonatomic) unsigned int index; // @synthesize index=_index;
- (void)dealloc;
- (id)initWithValue:(id)arg1;

@end

