//
//  RecipeSegmentControl.h
//  RecipeSegmentControlDemo
//
//  Created by Derek Yang on 05/30/12.
//  Copyright (c) 2012 Derek Yang. All rights reserved.
//


#import "SegmentButtonView.h"

@interface RecipeSegmentControl : UIView

- (RecipeSegmentControl *)init:(id<SegmentButtonViewDelegate>)delegate;
- (void)segmentButtonHighlighted:(SegmentButtonView *)highlightedSegmentButton;

@end
