//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCollectionLayoutSize, NSString;

__attribute__((visibility("hidden")))
@interface _NSCollectionLayoutVisualFormatItem : NSObject
{
    NSString *_name;
    NSCollectionLayoutSize *_size;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSCollectionLayoutSize *size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
- (id)initWithName:(id)arg1 size:(id)arg2;

@end

