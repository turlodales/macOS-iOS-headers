//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol PHPerformChangesRequest <NSObject>
- (void)recordDeleteRequest:(id <PHDeleteChangeRequest>)arg1;
- (void)recordUpdateRequest:(id <PHUpdateChangeRequest>)arg1;
- (void)recordInsertRequest:(id <PHInsertChangeRequest>)arg1;
@end

