//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

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

