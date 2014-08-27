//
//  ImageFilters.h
//  ImageFilters
//
//  Created by Jérome Freyre on 27.08.14.
//  Copyright (c) 2014 JDC Skywatch. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ImageFilters : NSObject

@property (nonatomic,readonly) UIImage *originalImage;

- (id)initWithImage:(UIImage *)image;
- (UIImage *)grayScaleImage;
- (UIImage *)oldImageWithIntensity:(CGFloat)level;

@end
