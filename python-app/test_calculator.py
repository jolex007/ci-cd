import pytest
import calculator

def test_add():
    assert calculator.add(2, 3) == 5

def test_devide_by_zero():
    with pytest.raises(ValueError):
        calculator.devide(10, 0)

def test_devide():
    assert calculator.devide(6, 3) == 2