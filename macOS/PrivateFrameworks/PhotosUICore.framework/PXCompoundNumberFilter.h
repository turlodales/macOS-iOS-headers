//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXNumberFilter.h>

@class NSArray;

@interface PXCompoundNumberFilter : PXNumberFilter
{
    NSArray *_filters;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *filters; // @synthesize filters=_filters;
- (double)updatedOutput;

@end

